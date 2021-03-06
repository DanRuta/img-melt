

class Context {
public:
    Context (int width, int height, char * id, int blend);

    ~Context (void);

    void run (uint8_t* buffer);

    void step (void);

private:
    int width;
    int height;

    GLuint texId;
    GLuint vertexObject;
    GLuint indexObject;
    uint8_t* imgData;

    GLuint programObject;
    GLuint vertexShader;
    GLuint fragmentShader;

    EMSCRIPTEN_WEBGL_CONTEXT_HANDLE context;

};