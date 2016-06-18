#pragma once

namespace HFSCLessonSignup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentSearch
	/// </summary>
	public ref class StudentSearch : public System::Windows::Forms::Form
	{
	public:
		StudentSearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  TabControl;
	protected:

	private: System::Windows::Forms::TabPage^  StudentTab;
	private: System::Windows::Forms::TabPage^  SessionTab;
	private: System::Windows::Forms::Panel^  SearchPanel;
	private: System::Windows::Forms::Panel^  RegistrationPanel;
	private: System::Windows::Forms::Panel^  SessionCreate;
	private: System::Windows::Forms::Panel^  ScessionEdit;
	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->StudentTab = (gcnew System::Windows::Forms::TabPage());
			this->SessionTab = (gcnew System::Windows::Forms::TabPage());
			this->SearchPanel = (gcnew System::Windows::Forms::Panel());
			this->RegistrationPanel = (gcnew System::Windows::Forms::Panel());
			this->ScessionEdit = (gcnew System::Windows::Forms::Panel());
			this->SessionCreate = (gcnew System::Windows::Forms::Panel());
			this->TabControl->SuspendLayout();
			this->StudentTab->SuspendLayout();
			this->SessionTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->StudentTab);
			this->TabControl->Controls->Add(this->SessionTab);
			this->TabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabControl->Location = System::Drawing::Point(0, 0);
			this->TabControl->Name = L"TabControl";
			this->TabControl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(877, 456);
			this->TabControl->TabIndex = 0;
			// 
			// StudentTab
			// 
			this->StudentTab->Controls->Add(this->SearchPanel);
			this->StudentTab->Controls->Add(this->RegistrationPanel);
			this->StudentTab->Location = System::Drawing::Point(4, 25);
			this->StudentTab->Name = L"StudentTab";
			this->StudentTab->Padding = System::Windows::Forms::Padding(3);
			this->StudentTab->Size = System::Drawing::Size(869, 427);
			this->StudentTab->TabIndex = 0;
			this->StudentTab->Text = L"Student Menu";
			this->StudentTab->UseVisualStyleBackColor = true;
			// 
			// SessionTab
			// 
			this->SessionTab->Controls->Add(this->SessionCreate);
			this->SessionTab->Controls->Add(this->ScessionEdit);
			this->SessionTab->Location = System::Drawing::Point(4, 25);
			this->SessionTab->Name = L"SessionTab";
			this->SessionTab->Padding = System::Windows::Forms::Padding(3);
			this->SessionTab->Size = System::Drawing::Size(869, 427);
			this->SessionTab->TabIndex = 1;
			this->SessionTab->Text = L"Session Menu";
			this->SessionTab->UseVisualStyleBackColor = true;
			// 
			// SearchPanel
			// 
			this->SearchPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SearchPanel->Location = System::Drawing::Point(3, 3);
			this->SearchPanel->Name = L"SearchPanel";
			this->SearchPanel->Size = System::Drawing::Size(863, 421);
			this->SearchPanel->TabIndex = 0;
			// 
			// RegistrationPanel
			// 
			this->RegistrationPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegistrationPanel->Location = System::Drawing::Point(3, 3);
			this->RegistrationPanel->Name = L"RegistrationPanel";
			this->RegistrationPanel->Size = System::Drawing::Size(863, 421);
			this->RegistrationPanel->TabIndex = 0;
			// 
			// ScessionEdit
			// 
			this->ScessionEdit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ScessionEdit->Location = System::Drawing::Point(3, 3);
			this->ScessionEdit->Name = L"ScessionEdit";
			this->ScessionEdit->Size = System::Drawing::Size(863, 421);
			this->ScessionEdit->TabIndex = 0;
			// 
			// SessionCreate
			// 
			this->SessionCreate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SessionCreate->Location = System::Drawing::Point(3, 3);
			this->SessionCreate->Name = L"SessionCreate";
			this->SessionCreate->Size = System::Drawing::Size(863, 421);
			this->SessionCreate->TabIndex = 0;
			// 
			// StudentSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 456);
			this->Controls->Add(this->TabControl);
			this->Name = L"StudentSearch";
			this->Text = L"StudentSearch";
			this->TabControl->ResumeLayout(false);
			this->StudentTab->ResumeLayout(false);
			this->SessionTab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
