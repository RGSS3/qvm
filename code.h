#ifndef CODE_H_
#define CODE_H_
typedef enum CODE CODE;

enum CODE {
    INVALID = 0,
    PUSH,
    POP,
    LOAD,
    STORE,
    
    ADD,
    SUB,
    READ,
    WRITE,
    HALT,
};

typedef struct ins_t ins_t;
struct ins_t {
    CODE code;
    union {
        int addr;
    };
    /*   */
};
#endif