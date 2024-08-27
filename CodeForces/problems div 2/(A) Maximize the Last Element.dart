import 'dart:io';

void main() {
  int t = int.parse(stdin.readLineSync()!); 
  for (int i = 0; i < t; i++) {
    int n = int.parse(stdin.readLineSync()!); 
    List<int> a = stdin.readLineSync()!.split(' ').map(int.parse).toList();
    
     
    int? max = a.asMap().entries.where((entry) => entry.key % 2 == 0).map((entry) => entry.value).reduce((curr, next) => curr > next ? curr : next); // إيجاد القيمة الكبرى في المواقع الزوجية
    print(max);
  
  }
}
