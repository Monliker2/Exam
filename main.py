def replace_text_in_file(file_path, text_to_replace, replacement_text):
    try:
        # Открываем файл и читаем его содержимое
        with open(file_path, 'r', encoding='ANSI') as file:
            file_content = file.read()

        # Заменяем текст
        updated_content = file_content.replace(text_to_replace, replacement_text)

        # Записываем обновленное содержимое обратно в файл
        with open(file_path, 'w', encoding='ANSI') as file:
            file.write(updated_content)

        print(f'Текст "{text_to_replace}" заменен на "{replacement_text}" в файле {file_path}')
    except FileNotFoundError:
        print(f'Файл по пути {file_path} не найден.')
    except Exception as e:
        print(f'Произошла ошибка при обработке файла {file_path}: {e}')



def main():
    file_path = "exam\\exam\\MyForm.h"
    print("Enter amount of numbers:")
    amount = int(input())

    print("Enter what to do(+,-,*,/):")
    operation = input()

    header = ''
    init = ''
    init1 = ''
    end = ''
    mid = ''

    for i in range(1,amount+1):
        textBox = 'textBox'+ str(i);
        label = 'label'+ str(i);
        pos = 70 + (i-1)*50;
        num = str(i);

        e = f"""this->Controls->Add(this->{label});
                this->Controls->Add(this->{textBox});"""

        d = f"""Convert::ToInt32({textBox}->Text)""" + operation

        c = f"""private: System::Windows::Forms::Label^ {label};
private: System::Windows::Forms::TextBox^ {textBox};"""

        b = f"""this->{textBox} = (gcnew System::Windows::Forms::TextBox());
                this->{label} = (gcnew System::Windows::Forms::Label());"""

        a = f""" // 
            // {textBox}
            // 
            this->{textBox}->Location = System::Drawing::Point(170, {pos});
            this->{textBox}->Name = L"{textBox}";
            this->{textBox}->Size = System::Drawing::Size(132, 22);
            this->{textBox}->TabIndex = 0;
            // 
            // {label}
            // 
            this->{label}->AutoSize = true;
            this->{label}->Location = System::Drawing::Point(50, {pos});
            this->{label}->Name = L"label{num}";
            this->{label}->Size = System::Drawing::Size(57, 16);
            this->{label}->TabIndex = 1;
            this->{label}->Text = L"Число {num}";"""
        header += a;
        init += b;
        init1 += c;
        end += d;
        mid += e;

    end = end[:-1]
    replace_text_in_file(file_path, '{header}', header)
    replace_text_in_file(file_path, '{init}', init)
    replace_text_in_file(file_path, '{init1}', init1)
    replace_text_in_file(file_path, '{end}', end)
    replace_text_in_file(file_path, '{mid}', mid)

    #replace_text_in_file(file_path, '{operation}', operation)


if __name__ == "__main__":
    main()
