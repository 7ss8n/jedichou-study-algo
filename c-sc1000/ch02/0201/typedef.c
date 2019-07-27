// 文件名：typedef.c
// 文件来自：《数据结构：1000个问题与解答》
// 编码格式：Unix(LF) + UTF-8-BOM
// 说明：使用typedef来定义结构

//////////////////////////////////////////
// MotorCar是书上的示例
typedef struct MotoCar
{
	char *model_number;
	long kilometers;
	int year_of_mfg;
	int month_of_mfg;
	char* manufacturer;
	char* owner;
	double engine_efficieny;
} MotoCar;

//////////////////////////////////////////
// Employee是随意写的一个示例
typedef struct Employee
{
	char* name;
	char* department;
	int age;
	int year_of_salry;
	char* leader_name;
} Employee;

int main(void)
{
	// 使用书上的示例来生成struct
	MotoCar car1;
	MotoCar car2;
	MotoCar *pCar;
	
	// 使用自己的示例来生成struct
	Employee em1;
	Employee em2;
	Employee *pEm;
	
	return 0;
}