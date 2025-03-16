# Scrapyard's webpage template

This template provides a minimal setup to get React working in Vite.

## How to copy

Press the green "<>code" button and download the zip file

Extract the zip file and open the extracted folder in VS code


## How to make this template

### Creating your react project

Open your console and run “npm create vite@latest my-app”

Select React then either Typescript or Javascript

### Using tailwind

Go to the root directory of the project by running "cd my-app" in the  console.

Run the command “npm install -D tailwindcss @tailwindcss/vite postcss autoprefixer”

In your vite.config.ts file add “import tailwindcss from '@tailwindcss/vite”. Then in the same file, in the plugins array add "tailwindcss()" so it should be "plugins: [react(), tailwindcss()]".

Onto your style sheet (styles.css or index.css *Try to only have 1 style sheet*) add "@import "tailwindcss";". 

However Tailwind sometimes gets overwritten by some UI libraries you may use. Since I am using Chakra UI, I have to change my import to:<br>
@layer theme, base, components, utilities; <br>
@import "tailwindcss/theme.css" layer(theme); <br>
@import "tailwindcss/preflight.css" layer(base); <br>
@import "tailwindcss/utilities.css";

### Some libraries you may find useful in your own project

ChakraUI (there are other types of UI you may prefer) - [Installation Documentation](https://chakra-ui.com/docs/get-started/installation) <br>
React Router - run "npm install react-router-dom"


**Have Fun!**




