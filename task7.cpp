// 7. Verilmiþ ?d?din r?q?ml?rinin sayýný tapmaq
void task7() {
int n, say = 0;
cout << "Eded daxil edin: ";
cin >> n;
while (n != 0) {
n /= 10;
say++;
}
cout << "Reqem sayi: " << say << endl;
}
