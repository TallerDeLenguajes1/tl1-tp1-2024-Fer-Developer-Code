# tp1
##### Archivo `.gitignore`

El archivo `.gitignore` es una herramienta clave en proyectos de Git, ya que permite especificar qué archivos o directorios no deben ser rastreados por el sistema de control de versiones.

###### ¿Por qué es conveniente incluir un `.gitignore`?

- **Mantenimiento del repositorio**: Ayuda a mantener el repositorio limpio al no incluir archivos innecesarios o sensibles.
- **Prevención de conflictos**: Evita que archivos generados automáticamente se sobrescriban entre colaboradores.
- **Optimización del rendimiento**: Reduce el tamaño del repositorio y mejora la velocidad de las operaciones de Git.

###### ¿Cuándo se debe crear el `.gitignore`?

El archivo `.gitignore` debe ser creado **antes** de realizar el primer commit para asegurarse de que los archivos no deseados nunca se rastreen.

###### ¿Cómo configurar el `.gitignore`?

Para configurar el `.gitignore`, crea un archivo en la raíz del proyecto y añade las reglas para los archivos que deseas ignorar. Por ejemplo:

```plaintext
# Ignora todos los archivos .log
*.log

# Ignora el directorio node_modules
node_modules/

# Ignora el archivo .env que contiene variables de entorno
.env

#####Ejemplo
#Si se desea ignorar el archivo -ignorado.txt- basta con poner en el .gitignore el nombre 
ignorado.txt