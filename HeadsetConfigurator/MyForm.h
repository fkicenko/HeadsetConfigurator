#pragma once
#include "ModelSpecific.h"
#include "HeadSetConfig.h"
#include "ConfiguratorJson.h"

namespace HeadsetConfigurator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Intialize the Configurator
			cj = gcnew ConfiguratorJson();
			// Load the Default Headset JSON Configuration
			hs = cj->ReadJson();
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  serverToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  ModelCB;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxFirmware;

	private: System::Windows::Forms::Label^  equalizerLabel;
	private: System::Windows::Forms::Label^  sideToneLabel;
	private: System::Windows::Forms::Label^  microPhoneLabel;

	private: HeadSetConfig^ hs;
	private: ModelSpecific^ ms = gcnew ModelSpecific();
	private: System::String^ ImageDir;
	private: ConfiguratorJson^ cj;
	private: System::String^ currentSeries;

	private: System::Windows::Forms::Label^  volumeLabel;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TrackBar^  trackBar7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  dectLabel;
	private: System::Windows::Forms::Label^  bluetoothLabel;
	private: System::Windows::Forms::Label^  audioBandwidthLabel;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dectLabel = (gcnew System::Windows::Forms::Label());
			this->bluetoothLabel = (gcnew System::Windows::Forms::Label());
			this->audioBandwidthLabel = (gcnew System::Windows::Forms::Label());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->equalizerLabel = (gcnew System::Windows::Forms::Label());
			this->sideToneLabel = (gcnew System::Windows::Forms::Label());
			this->microPhoneLabel = (gcnew System::Windows::Forms::Label());
			this->volumeLabel = (gcnew System::Windows::Forms::Label());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxFirmware = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ModelCB = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->editToolStripMenuItem, this->serverToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(625, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// serverToolStripMenuItem
			// 
			this->serverToolStripMenuItem->Name = L"serverToolStripMenuItem";
			this->serverToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->serverToolStripMenuItem->Text = L"Server";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(606, 530);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->webBrowser1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(598, 504);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Configuration";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\frank.kicenko\\Source\\Repos\\HeadsetConfigurator\\HeadsetConfigurator\\Asset"
				L"s\\main.jpg";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(300, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(280, 232);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(277, 492);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->dectLabel);
			this->groupBox1->Controls->Add(this->bluetoothLabel);
			this->groupBox1->Controls->Add(this->audioBandwidthLabel);
			this->groupBox1->Controls->Add(this->trackBar7);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->trackBar6);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->trackBar5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->equalizerLabel);
			this->groupBox1->Controls->Add(this->sideToneLabel);
			this->groupBox1->Controls->Add(this->microPhoneLabel);
			this->groupBox1->Controls->Add(this->volumeLabel);
			this->groupBox1->Controls->Add(this->trackBar4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->trackBar3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->trackBar2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxFirmware);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->ModelCB);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 482);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Headset ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(182, 436);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 13);
			this->label16->TabIndex = 30;
			this->label16->Text = L"Value:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(182, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Value:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(182, 341);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Value:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(182, 293);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Value:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(182, 241);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Value:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(182, 190);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Value:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(182, 141);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Value:";
			// 
			// dectLabel
			// 
			this->dectLabel->AutoSize = true;
			this->dectLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->dectLabel->Location = System::Drawing::Point(229, 436);
			this->dectLabel->Name = L"dectLabel";
			this->dectLabel->Size = System::Drawing::Size(13, 13);
			this->dectLabel->TabIndex = 23;
			this->dectLabel->Text = L"0";
			// 
			// bluetoothLabel
			// 
			this->bluetoothLabel->AutoSize = true;
			this->bluetoothLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->bluetoothLabel->Location = System::Drawing::Point(229, 388);
			this->bluetoothLabel->Name = L"bluetoothLabel";
			this->bluetoothLabel->Size = System::Drawing::Size(13, 13);
			this->bluetoothLabel->TabIndex = 22;
			this->bluetoothLabel->Text = L"0";
			// 
			// audioBandwidthLabel
			// 
			this->audioBandwidthLabel->AutoSize = true;
			this->audioBandwidthLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->audioBandwidthLabel->Location = System::Drawing::Point(229, 341);
			this->audioBandwidthLabel->Name = L"audioBandwidthLabel";
			this->audioBandwidthLabel->Size = System::Drawing::Size(13, 13);
			this->audioBandwidthLabel->TabIndex = 16;
			this->audioBandwidthLabel->Text = L"0";
			// 
			// trackBar7
			// 
			this->trackBar7->Location = System::Drawing::Point(16, 436);
			this->trackBar7->Maximum = 1;
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(152, 45);
			this->trackBar7->TabIndex = 21;
			this->trackBar7->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar7_Scroll);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 417);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"DECT Radio  (0 = Off, 1 = On)";
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(16, 388);
			this->trackBar6->Maximum = 1;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(152, 45);
			this->trackBar6->TabIndex = 19;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar6_Scroll);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 371);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Bluetooth (0 = Off, 1 = On)";
			// 
			// trackBar5
			// 
			this->trackBar5->Location = System::Drawing::Point(16, 341);
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(149, 45);
			this->trackBar5->TabIndex = 17;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar5_Scroll);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 324);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Audio Bandwidth (0 - 10)";
			// 
			// equalizerLabel
			// 
			this->equalizerLabel->AutoSize = true;
			this->equalizerLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->equalizerLabel->Location = System::Drawing::Point(229, 293);
			this->equalizerLabel->Name = L"equalizerLabel";
			this->equalizerLabel->Size = System::Drawing::Size(13, 13);
			this->equalizerLabel->TabIndex = 15;
			this->equalizerLabel->Text = L"3";
			// 
			// sideToneLabel
			// 
			this->sideToneLabel->AutoSize = true;
			this->sideToneLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->sideToneLabel->Location = System::Drawing::Point(229, 241);
			this->sideToneLabel->Name = L"sideToneLabel";
			this->sideToneLabel->Size = System::Drawing::Size(13, 13);
			this->sideToneLabel->TabIndex = 14;
			this->sideToneLabel->Text = L"2";
			// 
			// microPhoneLabel
			// 
			this->microPhoneLabel->AutoSize = true;
			this->microPhoneLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->microPhoneLabel->Location = System::Drawing::Point(229, 190);
			this->microPhoneLabel->Name = L"microPhoneLabel";
			this->microPhoneLabel->Size = System::Drawing::Size(13, 13);
			this->microPhoneLabel->TabIndex = 13;
			this->microPhoneLabel->Text = L"2";
			// 
			// volumeLabel
			// 
			this->volumeLabel->AutoSize = true;
			this->volumeLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->volumeLabel->Location = System::Drawing::Point(229, 141);
			this->volumeLabel->Name = L"volumeLabel";
			this->volumeLabel->Size = System::Drawing::Size(19, 13);
			this->volumeLabel->TabIndex = 12;
			this->volumeLabel->Text = L"10";
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(11, 293);
			this->trackBar4->Maximum = 6;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(157, 45);
			this->trackBar4->TabIndex = 11;
			this->trackBar4->Value = 3;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar4_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Equalizer (0 - 6)";
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(11, 241);
			this->trackBar3->Maximum = 3;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(157, 45);
			this->trackBar3->TabIndex = 9;
			this->trackBar3->Value = 2;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Sidetone (0 - 3)";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(11, 190);
			this->trackBar2->Maximum = 4;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(157, 45);
			this->trackBar2->TabIndex = 7;
			this->trackBar2->Value = 2;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Microphone Gain (0 - 4)";
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::Gainsboro;
			this->trackBar1->Location = System::Drawing::Point(9, 138);
			this->trackBar1->Maximum = 15;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(160, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Speaker Volume (1 - 15)";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBoxFirmware
			// 
			this->textBoxFirmware->Location = System::Drawing::Point(10, 94);
			this->textBoxFirmware->Name = L"textBoxFirmware";
			this->textBoxFirmware->Size = System::Drawing::Size(160, 20);
			this->textBoxFirmware->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Headset Firmware";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Headset Model";
			// 
			// ModelCB
			// 
			this->ModelCB->FormattingEnabled = true;
			this->ModelCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"520", L"530", L"560" });
			this->ModelCB->Location = System::Drawing::Point(11, 46);
			this->ModelCB->Name = L"ModelCB";
			this->ModelCB->Size = System::Drawing::Size(124, 21);
			this->ModelCB->TabIndex = 0;
			this->ModelCB->Text = L"Model";
			this->ModelCB->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(598, 504);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Result";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(586, 492);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(300, 262);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(280, 236);
			this->webBrowser1->TabIndex = 2;
			this->webBrowser1->Navigate(gcnew Uri("https://www.cisco.com/c/en/us/support/collaboration-endpoints/headset-500-series/tsd-products-support-series-home.html"));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm::webBrowser1_DocumentCompleted);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(625, 569);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Cisco Headset Configurator";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	// We need to get the selection from the ComboBox
	System::Windows::Forms::ComboBox^ box;
	box = (System::Windows::Forms::ComboBox^)sender;
	//ms->setModelSeries(box->SelectedItem->ToString());
	currentSeries = box->SelectedItem->ToString();
	// Set the Picture to the selected Headset
	//this->pictureBox1->Size = System::Drawing::Size(600, 338);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
	this->pictureBox1->ImageLocation = ms->getImageDir(ms->getModelSeries()+".png");
	this->pictureBox1->Refresh();
	// Load the values for the components from the HeadSetConfiguration
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if((s->getModelSeries()->CompareTo(box->SelectedItem->ToString()) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				// Get the Firmware Version
				textBoxFirmware->Text = mf->getFirmwareName();
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Speaker Volumne
					if (fp->getName()->CompareTo("Speaker Volume") == 0)
					{
						trackBar1->Value = Int32::Parse(fp->getValue());
						trackBar1->Refresh();
						volumeLabel->Text = trackBar1->Value.ToString();
					}
					// Microphone Setting
					else if (fp->getName()->CompareTo("Microphone Gain") == 0)
					{
						trackBar2->Value = Int32::Parse(fp->getValue());
						trackBar2->Refresh();
						microPhoneLabel->Text = trackBar2->Value.ToString();
					}
					// Sidetone
					else if (fp->getName()->CompareTo("Sidetone") == 0)
					{
						trackBar3->Value = Int32::Parse(fp->getValue());
						trackBar3->Refresh();
						sideToneLabel->Text = trackBar3->Value.ToString();
					}
					// Equalizer
					else if (fp->getName()->CompareTo("Equalizer") == 0)
					{
						trackBar4->Value = Int32::Parse(fp->getValue());
						trackBar4->Refresh();
						equalizerLabel->Text = trackBar4->Value.ToString();
					}
						
					if (s->getModelSeries()->CompareTo("560") == 0)
					{
						trackBar5->Enabled = true;
						trackBar6->Enabled = true;
						trackBar7->Enabled = true;
						// Audio Bandwidth
						if (fp->getName()->CompareTo("Audio Bandwidth") == 0)
						{
							trackBar5->Value = Int32::Parse(fp->getValue());
							trackBar5->Refresh();
							audioBandwidthLabel->Text = trackBar5->Value.ToString();
						}
						// Bluetooth
						else if (fp->getName()->CompareTo("Bluetooth") == 0)
						{
							trackBar6->Value = Int32::Parse(fp->getValue());
							trackBar6->Refresh();
							bluetoothLabel->Text = trackBar6->Value.ToString();
						}
						// DECT Radio Range
						else if (fp->getName()->CompareTo("DECT Radio Range") == 0)
						{
							trackBar7->Value = Int32::Parse(fp->getValue());
							trackBar7->Refresh();
							dectLabel->Text = trackBar7->Value.ToString();
						}
					}
					else
					{
						// Disable the 560 Options
						trackBar5->Enabled = false;
						audioBandwidthLabel->Text = "0";
						trackBar6->Enabled = false;
						bluetoothLabel->Text = "0";
						trackBar7->Enabled = false;
						dectLabel->Text = "0";
					}
				}
				break;
			}
				
		}
			
	}
}
// Volume Change Event
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->volumeLabel->Text = trackBar1->Value.ToString();
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Speaker Volumne
					if (fp->getName()->CompareTo("Speaker Volume") == 0)
					{
						fp->setValue(trackBar1->Value.ToString());
					}
				}
			}
		}
	}
}
// Terminate the Application
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Please Confirm you would like to Exit", "Cisco Headset Configuration Tool", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else
	{
		e->Cancel = true;
	}
}
// Microphone change event
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->microPhoneLabel->Text = trackBar2->Value.ToString();
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Microphone Gain
					if (fp->getName()->CompareTo("Microphone Gain") == 0)
					{
						fp->setValue(trackBar1->Value.ToString());
					}
				}
			}
		}
	}
}
 // Sidetone change event
private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->sideToneLabel->Text = trackBar3->Value.ToString();
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Sidetone
					if (fp->getName()->CompareTo("Sidetone") == 0)
					{
						fp->setValue(trackBar1->Value.ToString());
					}
				}
			}
		}
	}
}
// Equalizer change event
private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->equalizerLabel->Text = trackBar4->Value.ToString();
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Equalizer
					if (fp->getName()->CompareTo("Equalizer") == 0)
					{
						fp->setValue(trackBar1->Value.ToString());
					}
				}
			}
		}
	}
}
 // 560 Audio Bandwidth change event
 private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
	 this->audioBandwidthLabel->Text = trackBar5->Value.ToString();
	 for each(ModelSpecific^ s in hs->ModelSpecificList)
	 {
		 if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		 {
			 // Loop through Firmware Parms to get the values
			 for each(ModelFirmware^ mf in s->ModelFirmware)
			 {
				 for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				 {
					 // Audio Bandwidth
					 if (fp->getName()->CompareTo("Audio Bandwidth") == 0)
					 {
						 fp->setValue(trackBar1->Value.ToString());
					 }
				 }
			 }
		 }
	 }
}
// 560 Bluetooth change event
 private: System::Void trackBar6_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->bluetoothLabel->Text = trackBar6->Value.ToString();
	for each(ModelSpecific^ s in hs->ModelSpecificList)
	{
		if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		{
			// Loop through Firmware Parms to get the values
			for each(ModelFirmware^ mf in s->ModelFirmware)
			{
				for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				{
					// Bluetooth
					if (fp->getName()->CompareTo("Bluetooth") == 0)
					{
						fp->setValue(trackBar1->Value.ToString());
					}
				}
			}
		}
	}
}
// 560 DECT Radio Range change event
 private: System::Void trackBar7_Scroll(System::Object^  sender, System::EventArgs^  e) {
	 this->dectLabel->Text = trackBar7->Value.ToString();
	 for each(ModelSpecific^ s in hs->ModelSpecificList)
	 {
		 if ((s->getModelSeries()->CompareTo(currentSeries) == 0))
		 {
			 // Loop through Firmware Parms to get the values
			 for each(ModelFirmware^ mf in s->ModelFirmware)
			 {
				 for each(FirmwareParams^ fp in mf->FirmwareParamsList)
				 {
					 // DECT
					 if (fp->getName()->CompareTo("DECT Radio Range") == 0)
					 {
						 fp->setValue(trackBar1->Value.ToString());
					 }
				 }
			 }
		 }
	 }
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	cj->WriteJson(hs);
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	int i = 0;
}
};
}
