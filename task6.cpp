// 6. 1-d?n n-? q?d?r cüt ?d?dl?rin kvadratlarý c?mi
void task6() {
int n, sum = 0;
cout << "N daxil edin: ";
cin >> n;
for (int i = 2; i <= n; i += 2)
sum += i * i;
cout << "Cemi: " << sum << endl;
}
