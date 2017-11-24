## Laboratory work XIII
[![Build Status](https://travis-ci.org/Murderdoll/lab13.svg?branch=master)](https://travis-ci.org/Murderdoll/lab13)
# Баранов Артём ИУ8-33
### Задание

Написать программы на **C++** для сериализации и десериализации структуры `Person`.

Структура `Person` определяется следующим образом:

```cpp
struct Email {
  std::string nickname;
  std::string server;
};

struct Person {
  std::string  first_name;
  std::string  last_name;
  Email        email;
  size_t       age;
  std::string  phone;
};
```

### Результат проверки валидности через JSON Lint.
```
$jsonlint file.json
Вывод:
{
  "age": 19,
  "email_nickname": "artem765@inbox.ru",
  "first_name": "AAAAAA",
  "last_name": "B",
  "phone": "8(800)555-35-35"
}
```


