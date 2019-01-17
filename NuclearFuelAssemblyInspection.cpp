#pragma execution_character_set("utf-8")
#include "NuclearFuelAssemblyInspection.h"
#include <QtXml/QDomDocument>
#include <QFile>
#include <QFileDialog>
#include <QFileDevice>
#include <QTextStream>
#include <QXmlStreamWriter>
#include <string>

NuclearFuelAssemblyInspection::NuclearFuelAssemblyInspection(QWidget *parent)
: QMainWindow (parent)
{

	
	ui.setupUi(this); 
	
	// File (connect)
	QObject::connect(ui.action_File_Open, &QAction::triggered, this, &NuclearFuelAssemblyInspection::open);
	QObject::connect(ui.action_File_New, &QAction::triggered, this, &NuclearFuelAssemblyInspection::add);
	QObject::connect(ui.action_File_Close, &QAction::triggered, this, &NuclearFuelAssemblyInspection::close);
	QObject::connect(ui.action_File_Exit, &QAction::triggered, this, &NuclearFuelAssemblyInspection::clear);
	QObject::connect(ui.action_File_Save, &QAction::triggered, this, &NuclearFuelAssemblyInspection::save);
	QObject::connect(ui.action_File_Save_As, &QAction::triggered, this, &NuclearFuelAssemblyInspection::save_as);

	//measure
	QObject::connect(ui.action_Measure_Connect, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Measure_Connect);
	QObject::connect(ui.action_Measure_Reconnect, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Measure_Reconnect);
	QObject::connect(ui.action_Measure_Disconnect, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Measure_Disconnect);
	QObject::connect(ui.action_Measure_3D_Measurement, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Measure_3D_Measurement);
	QObject::connect(ui.action_Measure_System_Calibration, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Measure_System_Calibration);

	//view
	QObject::connect(ui.action_View_Zoom_to_Data, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Zoom_to_Data);
	QObject::connect(ui.action_View_Front, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Front);
	QObject::connect(ui.action_View_Back, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Back);
	QObject::connect(ui.action_View_Left, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Left);
	QObject::connect(ui.action_View_Right, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Right);
	QObject::connect(ui.action_View_Top, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Top);
	QObject::connect(ui.action_View_Bottom, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Bottom);
	QObject::connect(ui.action_View_Isometric, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Isometric);
	QObject::connect(ui.action_View_Fit_All, &QAction::triggered, this, &NuclearFuelAssemblyInspection::View_Fit_All);

	//Report_Excel
	QObject::connect(ui.action_Report_Excel, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Report_Excel);

	//Help_About
	QObject::connect(ui.action_Help_About, &QAction::triggered, this, &NuclearFuelAssemblyInspection::Help_About);
	//tree
	QObject::connect(ui.treeWidget_Sensor_List, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)), this, SLOT(Selecteditem(QTreeWidgetItem*, int)));
	QObject::connect(ui.treeWidget_Sensor_List, SIGNAL(itemChanged(QTreeWidgetItem*, int)), this, SLOT(closeEditor()));

	//tishi

}

// File 
void NuclearFuelAssemblyInspection::open()
{

	if ((newword1->a[0] != -1)&&(newword1->save_if == 0))
	{
		QMessageBox::information(this, tr("errer "), tr("the project can not be saved!"));

	}

	ui.action_File_Save->setEnabled(1);
	ui.action_File_Save_As->setEnabled(1);

	ui.action_File_Close->setEnabled(1);


	QString fileName;
	fileName = QFileDialog::getOpenFileName(this, tr("open file"), file_path, "Config Files (*.xml) ", 0);// tr(".xml"));
	QFile file(fileName); //���·��������·������Դ·������
	if (!fileName.isNull())
	{
		if (!file.open(QFile::ReadOnly))
			return;

		QDomDocument doc;
		if (!doc.setContent(&file))
		{
			file.close();
			return;
		}

		file.close();
		QDomElement root = doc.documentElement(); //���ظ��ڵ�
		qDebug() << root.nodeName();
		QDomNode node = root.firstChild(); //��õ�һ���ӽڵ�

		int a = 0;
		ui.treeWidget_Sensor_List->clear();
		QTreeWidgetItem * imageItem2 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("Ա����Ϣ")));
		imageItem2 = ui.treeWidget_Sensor_List->topLevelItem(0);
		QTreeWidgetItem *imageItem2_1 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));
		QTreeWidgetItem *imageItem2_2 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));


		QTreeWidgetItem * imageItem3 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������Ϣ")));
		imageItem3 = ui.treeWidget_Sensor_List->topLevelItem(1);
		QTreeWidgetItem *imageItem3_1 = new QTreeWidgetItem(imageItem3, QStringList(QString("�����ͺ�")));

		QTreeWidgetItem * imageItem4 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������1")));
		imageItem4 = ui.treeWidget_Sensor_List->topLevelItem(2);
		QTreeWidgetItem *imageItem4_1 = new QTreeWidgetItem(imageItem4, QStringList(QString("���к�")));
		QTreeWidgetItem *imageItem4_2 = new QTreeWidgetItem(imageItem4, QStringList(QString("�ع�")));
		QTreeWidgetItem *imageItem4_3 = new QTreeWidgetItem(imageItem4, QStringList(QString("����")));

		QTreeWidgetItem * imageItem5 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������2")));
		imageItem5 = ui.treeWidget_Sensor_List->topLevelItem(3);
		QTreeWidgetItem *imageItem5_1 = new QTreeWidgetItem(imageItem5, QStringList(QString("���к�")));
		QTreeWidgetItem *imageItem5_2 = new QTreeWidgetItem(imageItem5, QStringList(QString("�ع�")));
		QTreeWidgetItem *imageItem5_3 = new QTreeWidgetItem(imageItem5, QStringList(QString("����")));
		while (!node.isNull())  //����ڵ㲻��
		{
			

			if (node.isElement()) //����ڵ���Ԫ��
			{
				QDomElement e = node.toElement(); //ת��ΪԪ�أ�ע��Ԫ�غͽڵ����������ݽṹ����ʵ���
				QString id = e.attribute("id"); //��ӡ��ֵ�ԣ�tagName��nodeName��һ������
				QDomNodeList list = e.childNodes();



				//chushihua
				

				if (a == 0)
				{
					imageItem2_1->setText(1, list.at(0).toElement().text());
					newword1->name = list.at(0).toElement().text();
					imageItem2_2->setText(1, list.at(1).toElement().text());
					newword1->number = list.at(1).toElement().text();
				}
				if (a == 1)
				{
					imageItem3_1->setText(1, list.at(0).toElement().text());
					newword1->gongjian = list.at(0).toElement().text();
				}
				if (a == 2)
				{
					imageItem4_1->setText(1, list.at(0).toElement().text());
					newword1->xuliehao1 = list.at(0).toElement().text();
					imageItem4_2->setText(1, list.at(1).toElement().text());
					newword1->baoguang1 = list.at(1).toElement().text().toDouble ();
					imageItem4_3->setText(1, list.at(2).toElement().text());
					newword1->zhenyi1 = list.at(2).toElement().text().toDouble ();
				}
				if (a == 3)
					{
						imageItem5_1->setText(1, list.at(0).toElement().text());
						newword1->xuliehao2 = list.at(0).toElement().text();
						imageItem5_2->setText(1, list.at(1).toElement().text());
						newword1->baoguang2 = list.at(1).toElement().text().toDouble();
						imageItem5_3->setText(1, list.at(2).toElement().text());
						newword1->zhenyi2 = list.at(2).toElement().text().toDouble();
					}

		
				node = node.nextSibling();
				a++;//��һ���ֵܽڵ�,nextSiblingElement()����һ���ֵ�Ԫ�أ������

			}
		}
		open_info = 1;
	}
}
void NuclearFuelAssemblyInspection::add()
{

	if (newword1->a[0] != -1&&newword1->save_if ==0)
	{
		QMessageBox::information(this, tr("errer "), tr("the project can not be saved!"));

	}
	ui.action_File_Save->setEnabled(1);
	ui.action_File_Save_As->setEnabled(1);

	ui.action_File_Close->setEnabled(1);


	file_path = QFileDialog::getExistingDirectory(this, "��ѡ��ģ�屣��·��...", "./");
	if (file_path.isEmpty())
	{
		return;
	}
	newword1->baoguang1 = 3000;
	newword1->baoguang2 = 3000;
	newword1->zhenyi1 = 500;
	newword1->zhenyi2 = 500;
	ui.treeWidget_Sensor_List->clear();
	QTreeWidgetItem * imageItem2 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("Ա����Ϣ")));
	imageItem2 = ui.treeWidget_Sensor_List->topLevelItem(0);
	QTreeWidgetItem *imageItem2_1 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));
	QTreeWidgetItem *imageItem2_2 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));



	QTreeWidgetItem * imageItem3 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������Ϣ")));
	imageItem3 = ui.treeWidget_Sensor_List->topLevelItem(1);
	QTreeWidgetItem *imageItem3_1 = new QTreeWidgetItem(imageItem3, QStringList(QString("�����ͺ�")));


	QTreeWidgetItem * imageItem4 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������1")));
	imageItem4 = ui.treeWidget_Sensor_List->topLevelItem(2);
	QTreeWidgetItem *imageItem4_1 = new QTreeWidgetItem(imageItem4, QStringList(QString("���к�")));
	QTreeWidgetItem *imageItem4_2 = new QTreeWidgetItem(imageItem4, QStringList(QString("�ع�")));
	QTreeWidgetItem *imageItem4_3 = new QTreeWidgetItem(imageItem4, QStringList(QString("����")));
	//imageItem2_1->setText(1, newword1.name);
	imageItem4_2->setText(1, "3000");
	imageItem4_3->setText(1, "500");


	QTreeWidgetItem * imageItem5 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������2")));
	imageItem5 = ui.treeWidget_Sensor_List->topLevelItem(3);
	QTreeWidgetItem *imageItem5_1 = new QTreeWidgetItem(imageItem5, QStringList(QString("���к�")));
	QTreeWidgetItem *imageItem5_2 = new QTreeWidgetItem(imageItem5, QStringList(QString("�ع�")));
	QTreeWidgetItem *imageItem5_3 = new QTreeWidgetItem(imageItem5, QStringList(QString("����")));
	imageItem5_2->setText(1, "3000");
	imageItem5_3->setText(1, "500");
	//QMessageBox::information(this, tr("new system "), tr("system is ok "));
	open_info = 1;
	return;
}


void NuclearFuelAssemblyInspection::close()
{
	ui.action_File_Save->setDisabled(1);
	ui.action_File_Save_As->setDisabled(1);

	ui.action_File_Close->setDisabled(1);

	ui.treeWidget_Sensor_List->clear();
	QTreeWidgetItem * imageItem2 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("Ա����Ϣ")));
	imageItem2 = ui.treeWidget_Sensor_List->topLevelItem(0);
	QTreeWidgetItem *imageItem2_1 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));
	QTreeWidgetItem *imageItem2_2 = new QTreeWidgetItem(imageItem2, QStringList(QString("����")));



	QTreeWidgetItem * imageItem3 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������Ϣ")));
	imageItem3 = ui.treeWidget_Sensor_List->topLevelItem(1);
	QTreeWidgetItem *imageItem3_1 = new QTreeWidgetItem(imageItem3, QStringList(QString("�����ͺ�")));


	QTreeWidgetItem * imageItem4 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������1")));
	imageItem4 = ui.treeWidget_Sensor_List->topLevelItem(2);
	QTreeWidgetItem *imageItem4_1 = new QTreeWidgetItem(imageItem4, QStringList(QString("���к�")));
	QTreeWidgetItem *imageItem4_2 = new QTreeWidgetItem(imageItem4, QStringList(QString("�ع�")));
	QTreeWidgetItem *imageItem4_3 = new QTreeWidgetItem(imageItem4, QStringList(QString("����")));
	//imageItem2_1->setText(1, newword1.name);



	QTreeWidgetItem * imageItem5 = new QTreeWidgetItem(ui.treeWidget_Sensor_List, QStringList(QString("������2")));
	imageItem5 = ui.treeWidget_Sensor_List->topLevelItem(3);
	QTreeWidgetItem *imageItem5_1 = new QTreeWidgetItem(imageItem5, QStringList(QString("���к�")));
	QTreeWidgetItem *imageItem5_2 = new QTreeWidgetItem(imageItem5, QStringList(QString("�ع�")));
	QTreeWidgetItem *imageItem5_3 = new QTreeWidgetItem(imageItem5, QStringList(QString("����")));

	open_info = 0; 
	return;

}
void NuclearFuelAssemblyInspection::clear()
{
	/*switch (QMessageBox::information(this, tr("exit tip"), tr("Do you really want exit?"), tr("Yes"), tr("No"), 0, 1)) 
	{ case 0: 
	event->accept(); break; 
	case 1: 
	default:
		event->ignore(); break; 
	}*/	
	this->close();
	QCoreApplication::quit();


}
void NuclearFuelAssemblyInspection::save()
{
	

	if (newword1->save_if == 1)
	{
	
		QMessageBox::information(this, tr("error:"), tr("The saved��"));
		return;
	}
	QString fileName;

	fileName = QFileDialog::getSaveFileName(this,
		tr("save Config"), file_path, tr("Config Files (*.xml)") );

	

	QFile file(fileName);

	QXmlStreamWriter writer(&file);

	writer.setAutoFormatting(true); // �Զ���ʽ��

	writer.writeStartDocument();  // ��ʼ�ĵ���XML ����,��ϵͳ���Զ�����xml�İ汾 

	writer.writeEndDocument();  // �����ĵ�

	file.close();  // �ر��ļ�

	if (!fileName.isNull())
	{

		if (!file.open(QFile::WriteOnly | QFile::Truncate)) //������QIODevice��Truncate��ʾ���ԭ��������
			return;
		QDomDocument doc;
		QDomProcessingInstruction instruction; //��Ӵ�������
		instruction = doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
		doc.appendChild(instruction);
		QDomElement root = doc.createElement("measurement_system");
		doc.appendChild(root);

		QDomElement person = doc.createElement("person_information");
		person.setAttribute("ID", "O");
		QDomElement name = doc.createElement("name");
		QDomText name_value = doc.createTextNode(newword1->name);
		person.appendChild(name);
		name.appendChild(name_value);
		QDomElement number = doc.createElement("Job_number");
		QDomText number_value = doc.createTextNode(newword1->number);
		person.appendChild(number);
		number.appendChild(number_value);
		root.appendChild(person);

		QDomElement workpiece = doc.createElement("workpiece_information");
		person.setAttribute("ID", "1");
		QDomElement type = doc.createElement("workpiece_type");
		QDomText type_value = doc.createTextNode("shsgdjnjgxhyduj");
		workpiece.appendChild(type);
		type.appendChild(type_value);
		root.appendChild(workpiece);

		QDomElement sensor1 = doc.createElement("sensor1");
		sensor1.setAttribute("ID", "2");
		QDomElement serial_number = doc.createElement("serial_number");
		QDomText sensor1_value = doc.createTextNode("shsgdjnjgxhyduj");
		sensor1.appendChild(serial_number);
		serial_number.appendChild(sensor1_value);
		QDomElement exposure1 = doc.createElement("exposure");
		QDomText exposure1_value = doc.createTextNode(QString::number(newword1->baoguang1));
		sensor1.appendChild(exposure1);
		exposure1.appendChild(exposure1_value);
		QDomElement gain1 = doc.createElement("gain");
		QDomText gain1_value = doc.createTextNode(QString::number(newword1->zhenyi1));
		sensor1.appendChild(gain1);
		gain1.appendChild(gain1_value);
		root.appendChild(sensor1);

		QDomElement sensor2 = doc.createElement("sensor2");
		sensor2.setAttribute("ID", "3");
		QDomElement seria2_number = doc.createElement("serial_number");
		QDomText sensor2_value = doc.createTextNode("shsgdjnjgxhyduj");
		sensor2.appendChild(seria2_number);
		seria2_number.appendChild(sensor2_value);
		QDomElement exposure2 = doc.createElement("exposure");
		QDomText exposure2_value = doc.createTextNode(QString::number(newword1->baoguang2));
		sensor2.appendChild(exposure2);
		exposure2.appendChild(exposure2_value);
		QDomElement gain2 = doc.createElement("gain");
		QDomText gain2_value = doc.createTextNode(QString::number(newword1->zhenyi2));
		sensor2.appendChild(gain2);
		gain2.appendChild(gain2_value);
		root.appendChild(sensor2);

		//QDomElement time1 = doc.createElement("time");
		//time1.setAttribute("open_time", newword1.canpany);
		QTextStream out_stream(&file);
		doc.save(out_stream, 4); //����4��
		file.close();
		newword1->save_if = 1;
		return;
	}
	


}

void NuclearFuelAssemblyInspection::save_as()
{
	QString fileName;

	fileName = QFileDialog::getSaveFileName(this,
		tr("save Config"), file_path, tr("Config Files (*.xml)"));



	QFile file(fileName);

	QXmlStreamWriter writer(&file);

	writer.setAutoFormatting(true); // �Զ���ʽ��

	writer.writeStartDocument();  // ��ʼ�ĵ���XML ����,��ϵͳ���Զ�����xml�İ汾 

	writer.writeEndDocument();  // �����ĵ�

	file.close();  // �ر��ļ�

	if (!fileName.isNull())
	{

		if (!file.open(QFile::WriteOnly | QFile::Truncate)) //������QIODevice��Truncate��ʾ���ԭ��������
			return;
		QDomDocument doc;
		QDomProcessingInstruction instruction; //��Ӵ�������
		instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");
		doc.appendChild(instruction);
		QDomElement root = doc.createElement("measurement_system");
		doc.appendChild(root);

		QDomElement person = doc.createElement("person_information");
		person.setAttribute("ID", "O");
		QDomElement name = doc.createElement("name");
		QDomText name_value = doc.createTextNode(newword1->name);
		person.appendChild(name);
		name.appendChild(name_value);
		QDomElement number = doc.createElement("Job_number");
		QDomText number_value = doc.createTextNode(newword1->number);
		person.appendChild(number);
		number.appendChild(number_value);


		QDomElement workpiece = doc.createElement("workpiece_information");
		person.setAttribute("ID", "1");
		QDomElement type = doc.createElement("workpiece_type");
		QDomText type_value = doc.createTextNode("shsgdjnjgxhyduj");
		workpiece.appendChild(type);
		type.appendChild(type_value);
		root.appendChild(workpiece);

		QDomElement sensor1 = doc.createElement("sensor1");
		sensor1.setAttribute("ID", "2");
		QDomElement serial_number = doc.createElement("serial_number");
		QDomText sensor1_value = doc.createTextNode("shsgdjnjgxhyduj");
		sensor1.appendChild(serial_number);
		serial_number.appendChild(sensor1_value);
		QDomElement exposure1 = doc.createElement("exposure");
		QDomText exposure1_value = doc.createTextNode(QString::number(newword1->baoguang1));
		sensor1.appendChild(exposure1);
		exposure1.appendChild(exposure1_value);
		QDomElement gain1 = doc.createElement("gain");
		QDomText gain1_value = doc.createTextNode(QString::number(newword1->zhenyi1));
		sensor1.appendChild(gain1);
		gain1.appendChild(gain1_value);
		root.appendChild(sensor1);

		QDomElement sensor2 = doc.createElement("sensor2");
		sensor2.setAttribute("ID", "3");
		QDomElement seria2_number = doc.createElement("serial_number");
		QDomText sensor2_value = doc.createTextNode("shsgdjnjgxhyduj");
		sensor2.appendChild(seria2_number);
		seria2_number.appendChild(sensor2_value);
		QDomElement exposure2 = doc.createElement("exposure");
		QDomText exposure2_value = doc.createTextNode(QString::number(newword1->baoguang2));
		sensor2.appendChild(exposure2);
		exposure2.appendChild(exposure2_value);
		QDomElement gain2 = doc.createElement("gain");
		QDomText gain2_value = doc.createTextNode(QString::number(newword1->zhenyi2));
		sensor2.appendChild(gain2);
		gain2.appendChild(gain2_value);
		root.appendChild(sensor2);

		//QDomElement time1 = doc.createElement("time");
		//time1.setAttribute("open_time", newword1.canpany);
		QTextStream out_stream(&file);
		doc.save(out_stream, 4); //����4��
		file.close();
		return;
	}

}

//measure
void NuclearFuelAssemblyInspection::Measure_Connect()
{
	ui.action_Measure_Disconnect->setEnabled(1);
	ui.action_Measure_Connect->setDisabled(1);
	ui.action_Measure_3D_Measurement->setEnabled(1);

	opentime = QString("(%1)").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd"));
	QMessageBox::information(this, tr("Measure "), tr("Measure_Connect "));
	return;
}
void NuclearFuelAssemblyInspection::Measure_Reconnect()
{
	QMessageBox::information(this, tr("Measure "), tr("Measure_Reconnect "));
	return;
}
void NuclearFuelAssemblyInspection::Measure_Disconnect()
{
	    ui.action_Measure_Connect->setEnabled(1);
		ui.action_Measure_Reconnect->setDisabled(1);
		ui.action_Measure_3D_Measurement->setDisabled(1);
		ui.action_View_Back->setDisabled(1);
		ui.action_View_Bottom->setDisabled(1);
		ui.action_View_Fit_All->setDisabled(1);
		ui.action_View_Front->setDisabled(1);
		ui.action_View_Isometric->setDisabled(1);
		ui.action_View_Left->setDisabled(1);
		ui.action_View_Right->setDisabled(1);
		ui.action_View_Top->setDisabled(1);
		ui.action_View_Zoom_to_Data->setDisabled(1);
	QMessageBox::information(this, tr("Measure "), tr("Measure_Disconnect"));
	return;
}
void NuclearFuelAssemblyInspection::Measure_3D_Measurement()
{
	ui.action_View_Back->setEnabled(1);
	ui.action_View_Bottom->setEnabled(1);
	ui.action_View_Fit_All->setEnabled(1);
	ui.action_View_Front->setEnabled(1);
	ui.action_View_Isometric->setEnabled(1);
	ui.action_View_Left->setEnabled(1);
	ui.action_View_Right->setEnabled(1);
	ui.action_View_Top->setEnabled(1);
	ui.action_View_Zoom_to_Data->setEnabled(1);


	QMessageBox::information(this, tr("Measure "), tr("Measure_3D_Measurement"));
	return;
}
void NuclearFuelAssemblyInspection::Measure_System_Calibration()
{
	Password *password1 = new Password(this);
	password1->setModal(this);
	password1->show();
}

//view
void NuclearFuelAssemblyInspection::View_Zoom_to_Data()
{
	QMessageBox::information(this, tr("View "), tr("View_Zoom_to_Data"));
	return;
}
void NuclearFuelAssemblyInspection::View_Front()
{
	QMessageBox::information(this, tr("View "), tr("View_Front"));
	return;
}
void NuclearFuelAssemblyInspection::View_Back()
{
	QMessageBox::information(this, tr("View "), tr("View_Back"));
	return;
}
void NuclearFuelAssemblyInspection::View_Left()
{
	QMessageBox::information(this, tr("View "), tr("View_Left"));
	return;
}
void NuclearFuelAssemblyInspection::View_Right()
{
	QMessageBox::information(this, tr("View "), tr("View_Right"));
	return;
}
void NuclearFuelAssemblyInspection::View_Top()
{
	QMessageBox::information(this, tr("View "), tr("View_Top"));
	return;
}
void NuclearFuelAssemblyInspection::View_Bottom()
{
	QMessageBox::information(this, tr("View "), tr("View_Bottm"));
	return;
}
void  NuclearFuelAssemblyInspection::View_Isometric()
{
	QMessageBox::information(this, tr("View "), tr("View_Isometric"));
    return;
}
void  NuclearFuelAssemblyInspection::View_Fit_All()
{
	QMessageBox::information(this, tr("View "), tr("View_Fit_All"));
	return;
}

//Report_Excel
void  NuclearFuelAssemblyInspection::Report_Excel()
{
	closetime = QString("(%1)").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd"));

	QAxObject *work_book = NULL;

	QAxObject excel("Excel.Application");

	excel.setProperty("Visible", false);

	excel.setProperty("DisplayAlerts", false);//����ʾ�κξ�����Ϣ

	QAxObject *work_books = excel.querySubObject("WorkBooks");

	QString filePath = file_path + "/report.xlsx";
	QFile xlsFile(filePath);

	if (xlsFile.exists()) {

		work_book = work_books->querySubObject("Open(const QString &)", filePath);

	}

	else {

		work_books->dynamicCall("Add");

		work_book = excel.querySubObject("ActiveWorkBook");

	}

	QAxObject *work_sheets = work_book->querySubObject("Sheets");

	QAxObject *first_sheet = work_sheets->querySubObject("Item(int)", 1);
	
	
	QAxObject *cell = first_sheet->querySubObject("Cells(int,int)", 1,2);
	cell->setProperty("WrapText", true);  //���ݹ��࣬�Զ�����
	//.mergeCells("G1:H2");
	
	//cell->metaObject("A1 : I2");
	//��ͷ��
	QString merge_cell;
	merge_cell.append(QChar(1- 1 + 'A'));  //��ʼ��
	merge_cell.append(QString::number(1));  //��ʼ��
	merge_cell.append(":");
	merge_cell.append(QChar(2 - 1 + 'H'));  //��ֹ��
	merge_cell.append(QString::number(2));  //��ֹ��
	QAxObject *merge_range = first_sheet->querySubObject("Range(const QString&)", merge_cell);
	merge_range->setProperty("MergeCells", true);  //�ϲ���Ԫ��
	merge_range->setProperty("Value", "ȼ�������ⱨ����Ϣ");
	merge_range->setProperty("VerticalAlignment", -4108);
	merge_range->setProperty("HorizontalAlignment", -4108);
	QAxObject* interior = merge_range->querySubObject("Interior");
	interior->setProperty("Color", QColor(0, 0, 255));
	QAxObject* border = merge_range->querySubObject("Borders");
    border->setProperty("Color", QColor(0, 0, 0)); 
	QAxObject *font = merge_range->querySubObject("Font");  //��ȡ��Ԫ������
	font->setProperty("Name", QStringLiteral("���Ĳ���"));  //���õ�Ԫ������
	font->setProperty("Bold", true);  //���õ�Ԫ������Ӵ�
	font->setProperty("Size", 16);  //���õ�Ԫ�������С
	font->setProperty("Color", QColor(255, 0, 255));
	font->setProperty("Underline", 2);  //���õ�Ԫ���»���
	//��ͷ��

	//��

	int acol[17] = { 3,4,5,5,5,6,8,9,9,9,9,9,9,10,11,12,13};
	int arow[17] = { 3,3,3,4,6,3,2,3,4,5,6,7,8,2,2,2,2};
	QString xinxi[17] = { "����Ա:","����:","ʱ��:","��ʼʱ��:","����ʱ��:","�������к�:","�����:","X","Y","Z","X������","Y���ȣ�","Z���ã�","Part1","Part2","Ť��" ,"����"};
	for (int i = 0; i < 17; i++)
	{
		QAxObject *cell2 = first_sheet->querySubObject("Cells(int,int)", acol[i], arow[i]);
		//cell2->setProperty("WrapText", true);  //���ݹ��࣬�Զ�����
		cell2->setProperty("HorizontalAlignment", -4108);
		cell2->setProperty("Value", xinxi[i]);
		cell2->setProperty("ColumnWidth", 20);  //���õ�Ԫ���п�
		cell2->setProperty("RowHeight", 16);  //���õ�Ԫ���и�
		QAxObject *font2 = cell2->querySubObject("Font");  //��ȡ��Ԫ������
		//font2->setProperty("Bold", true);
		font2->setProperty("Size", 14);  //���õ�Ԫ�������С
	}



	work_book->dynamicCall("SaveAs(const QString &)", QDir::toNativeSeparators(filePath)); //ת��·�������٣���������

	work_book->dynamicCall("Close(Boolean)", false);  //�ر��ļ�

	excel.dynamicCall("Quit(void)");  //�˳�




	
}
void  NuclearFuelAssemblyInspection::Help_About()
{
	Aboutwin *aboutwin = new Aboutwin(this);
	aboutwin->setModal(true);
	aboutwin->show();

	// �������

}
void NuclearFuelAssemblyInspection::Selecteditem(QTreeWidgetItem* item, int column)
{
	if (open_info)
	{
		QTreeWidgetItem *parent = item->parent();//��ø��ڵ�
		if (NULL == parent)
			return;
		int col2 = parent->indexOfChild(item);
		int col1 = ui.treeWidget_Sensor_List->indexOfTopLevelItem(parent);
		if (col1 == 1 || col1 == 3 && col2 == 0 || col1 == 2 && col2 == 0 || column == 0)
		{
			return;
		}

		ui.treeWidget_Sensor_List->openPersistentEditor(item, column);
		newword1->a[0] = col1;
		newword1->a[1] = col2;
		item1 = item;
		dianji = 1;
	}
	return;
}
void NuclearFuelAssemblyInspection::closeEditor()
{
	newword1->save_if = 0;
	if (dianji)
	{
	switch (newword1->a[0])
	{
	case 0:if (newword1->a[1] == 0)
	{
		newword1->name = item1->text(1);
	}
		   else if (newword1->a[1] == 1)
		   {
			   newword1->number = item1->text(1);

		   }
		   break;
	case 2: if (newword1->a[1] == 1)
	{
		newword1->baoguang1 = item1->text(1).toDouble();

	}
			else if (newword1->a[1] == 2)
			{
				newword1->zhenyi1 = item1->text(1).toDouble();
			}
			break;
	case 3:
		if (newword1->a[1] == 1)
		{
			newword1->baoguang2 = item1->text(1).toDouble();

		}
		else if (newword1->a[1] == 2)
		{
			double num = item1->text(1).toDouble();
			newword1->zhenyi2 = num;
		}
		break;   
	
	}
	ui.treeWidget_Sensor_List->closePersistentEditor(item1, 1);
	}
	dianji = 0;
	return;
	
}

