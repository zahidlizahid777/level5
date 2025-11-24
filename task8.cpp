// 8. N-d?n kiçik bütün sad? ?d?dl?ri ekrana çýxarmaq
void task8() {
int n;
cout << "N daxil edin: ";
cin >> n;
for (int i = 2; i < n; i++) {
bool sade = true;
for (int j = 2; j * j <= i; j++)
if (i % j == 0) sade = false;
if (sade) cout << i << " ";
}
cout << endl;
}
