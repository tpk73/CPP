#include <iostream>
using namespace std;

int main( )
{
	int orga, orgb, orgc, orgd;
	int step = 0;
	
	cout << "Enter four numbers: ";
	cin >> orga >> orgb >> orgc >> orgd;
	
	/*TEST
	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << n4 << endl;
	*/
	
	int a,b,c,d;
	while(true){
		a = abs(orga - orgb);
		b = abs(orgb - orgc);
		c = abs(orgc - orgd);
		d = abs(orgd - orga);
		orga = a;
		orgb = b;
		orgc = c;
		orgd = d;
		
		cout << orga << orgb << orgc << orgd << endl;
		step ++;
		if(orga == orgb && orga == orgc && orga == orgd)
			break;
	}
	cout << '\n' << "This group converges to value " << orga << " after " << step << " steps.";
}