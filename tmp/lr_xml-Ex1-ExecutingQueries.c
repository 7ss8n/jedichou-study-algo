#include "as_web.h"

/* The XML Data */
char *xml_input= 
	"<acme_org>"
		 "<accounts_dept>"
			  "<employee>"
				   "<name>Kevin Sharp</name>"
				   "<cubicle>227</cubicle>"
				   "<extension>2145</extension>"
			  "</employee>"
		 "</accounts_dept>"
		 "<engineering_dept>"
			  "<employee>"
				   "<name>John Smith</name>"
				   "<cubicle>372</cubicle>"
				   "<extension>2970</extension>"
			  "</employee>"
			  "<employee level=\"manager\">"
				   "<name>Sue Jones</name>"
				   "<extension>2375</extension>"
			  "</employee>"
		 "</engineering_dept>"
	"</acme_org>";

Action()
{
	// int query_number = 1;

	// Save data as parameter
	lr_save_string(xml_input, "XML_Input_Param");

	/* 
	 * Query 1: Find the first employee's name
	 * (To find the names of all employees
	 * see Multiple Query Matching 
	 */
	lr_xml_get_values("XML={XML_Input_Param}",
					  "ValueParam=Result",
					  "Query=/acme_org/*/employee/name",
					  LAST);
    // lr_output_message("the /acme_org/*/employee/name is : %s", lr_eval_string("{Result}"));

	/*
	 * Query 2: Find the first extension number one
	 * or more levels deep
     */
	lr_xml_get_values("XML={XML_Input_Param}",
					  "ValueParam=Result",
					  "Query=//extension",
					  LAST);
	// lr_output_message("extension is : %s", lr_eval_string("{Result}"));

	/*
	 * Query 3 : Find the name of the manager
	 * of the engineering department
     */
	lr_xml_get_values("XML={XML_Input_Param}",
					  "ValueParam=Result",
					  "Query=/acme_org/engineering_dept/employee[@level=\"manager\"]/name",
					  LAST);
	lr_output_message("manager is : %s", lr_eval_string("{Result}"));

	/* 
	 * Query 4: Find the name of an employee
	 * whose extension number is 2970
	 */
	lr_xml_get_values("XML={XML_Input_Param}",
					  "ValueParam=Result",
					  "Query=/acme_org/*/employee[extension=\"2970\"]/name",
					  LAST);
	// lr_output_message("2970's name is : %s", lr_eval_string("{Result}"));

	return 0;
}

