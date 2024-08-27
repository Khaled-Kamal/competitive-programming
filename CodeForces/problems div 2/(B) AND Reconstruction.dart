import 'dart:io';

void performTest(List<String> input) {
  int index = 0;
  int num = int.parse(input[index++]);
  num--;
  List<int> bArray = List.filled(num + 1, 0);

  for (int i = 1; i <= num; i++) {
    bArray[i] = int.parse(input[index++]);
  }

  List<int> aArray = List.filled(num + 2, 0);

  for (int i = 1; i <= num; i++) {
    for (int bit = 0; bit < 30; bit++) {
      if ((bArray[i] & (1 << bit)) != 0) {
        aArray[i] |= (1 << bit);
        aArray[i + 1] |= (1 << bit);
      }
    }
  }

  for (int i = 1; i <= num; i++) {
    if (bArray[i] != (aArray[i] & aArray[i + 1])) {
      print(-1);
      return;
    }
  }

  for (int i = 1; i <= num + 1; i++) {
    stdout.write("${aArray[i]} ");
  }
  print('');
}

void main() {
  int testCases = int.parse(stdin.readLineSync()!);
  for (int i = 0; i < testCases; i++) {
    List<String> input = stdin.readLineSync()!.split(' ');
    performTest(input);
  }
}
