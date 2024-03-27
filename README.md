# TurboBoostSwitcher (English)

Turbo Boost Manager is a simple utility that allows you to enable or disable Intel Turbo Boost on your Windows system. Turbo Boost is a feature that dynamically increases the processor's clock speed when the workload demands more performance, providing a burst of speed for demanding applications.

## Features

- Automatically detects the current state of Intel Turbo Boost
- Enables Turbo Boost if it's disabled, or disables it if it's enabled
- Provides visual feedback through message boxes

## Requirements

- Windows operating system

## Usage

1. Run the Turbo Boost Manager executable.
2. The program will automatically detect the current state of Intel Turbo Boost and perform the necessary action (enable or disable).
3. A message box will be displayed, indicating whether Turbo Boost is now enabled or disabled.

## Project Structure

The project consists of the following files:

- `main.c`: The main program file, containing the `WinMain` function and core logic.
- `power_utils.h` and `power_utils.c`: Files containing functions related to power settings operations.
- `ui_utils.h` and `ui_utils.c`: Files with helper functions for user interface and message box handling.
- `resource.h`: Resource file for the program icon.

## Building from Source

To build the program from source, you'll need a C compiler compatible with Windows development. The project includes the necessary source files and a Visual Studio solution file.

1. Open the solution file in Visual Studio or your preferred C development environment.
2. Build the solution to generate the executable.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## Author

This program was created by Andrii Bohachev(andriybogachev@gmail.com).

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

# TurboBoostSwitcher (Українська)

TurboBoostSwitcher - це проста утиліта, яка дозволяє вмикати або вимикати технологію Intel Turbo Boost у вашій системі Windows. Turbo Boost - це функція, яка динамічно збільшує тактову частоту процесора, коли робоче навантаження вимагає більшої продуктивності, забезпечуючи приріст швидкості для вимогливих додатків.

## Можливості

- Автоматично визначає поточний стан технології Intel Turbo Boost
- Вмикає Turbo Boost, якщо він вимкнений, або вимикає його, якщо він увімкнений
- Надає візуальний зворотний зв'язок через вікна повідомлень

## Вимоги

- Операційна система Windows

## Використання

1. Запустіть виконуваний файл Turbo Boost Manager.
2. Програма автоматично визначить поточний стан Intel Turbo Boost і виконає необхідну дію (увімкнення або вимкнення).
3. Буде відображено вікно повідомлення, яке вказує, чи Turbo Boost тепер увімкнено чи вимкнено.

## Структура проєкту

Проєкт складається з наступних файлів:

- `main.c`: Головний файл програми, містить функцію `WinMain` та основну логіку.
- `power_utils.h` та `power_utils.c`: Файли, які містять функції, пов'язані з операціями над налаштуваннями живлення.
- `ui_utils.h` та `ui_utils.c`: Файли з допоміжними функціями для роботи з інтерфейсом користувача та обробки вікон повідомлень.
- `resource.h`: Файл ресурсів для іконки програми.

## Збірка з вихідного коду

Щоб зібрати програму з вихідного коду, вам знадобиться компілятор C, сумісний з розробкою для Windows. Проект включає необхідні вихідні файли та файл рішення Visual Studio.

1. Відкрийте файл рішення у Visual Studio або у вашому середовищі розробки C.
2. Збудуйте рішення, щоб згенерувати виконуваний файл.

## Внесок

Внески вітаються! Якщо ви знайшли якісь проблеми або маєте пропозиції щодо вдосконалень, відкрийте issue або надішліть pull request.

## Автор

Ця програма була створена by Andrii Bohachev(andriybogachev@gmail.com).

## Ліцензія

Цей проєкт ліцензований згідно з [Ліцензією MIT](LICENSE).