#pragma once

namespace exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	{init1}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ resultLabel;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			{init}
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			{header}           		
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(83, 294);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 16);
			this->resultLabel->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 353);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->button1);
			{mid}
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		resultLabel->Text = "Результат: " + ({end});
	}
};
}
