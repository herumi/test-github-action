#include <stdio.h>

int main()
{
    printf("=== ARM64 Windows Macro Detection ===\n\n");
    
    // アーキテクチャ関連マクロ
    printf("Architecture Macros:\n");
    printf("_M_ARM64: %s\n", 
#ifdef _M_ARM64
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__aarch64__: %s\n", 
#ifdef __aarch64__
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("_M_ARM: %s\n", 
#ifdef _M_ARM
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__arm__: %s\n", 
#ifdef __arm__
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__arm64__: %s\n", 
#ifdef __arm64__
        "defined"
#else
        "not defined"
#endif
    );
    
    // コンパイラ関連マクロ
    printf("\nCompiler Macros:\n");
    printf("_MSC_VER: %s\n", 
#ifdef _MSC_VER
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__clang__: %s\n", 
#ifdef __clang__
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__GNUC__: %s\n", 
#ifdef __GNUC__
        "defined"
#else
        "not defined"
#endif
    );
    
    // Windows関連マクロ
    printf("\nWindows Macros:\n");
    printf("_WIN32: %s\n", 
#ifdef _WIN32
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("_WIN64: %s\n", 
#ifdef _WIN64
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("WIN32: %s\n", 
#ifdef WIN32
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("WIN64: %s\n", 
#ifdef WIN64
        "defined"
#else
        "not defined"
#endif
    );
    
    // プラットフォーム関連マクロ
    printf("\nPlatform Macros:\n");
    printf("__ARM_ARCH: %s\n", 
#ifdef __ARM_ARCH
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__ARM_ARCH_8A: %s\n", 
#ifdef __ARM_ARCH_8A
        "defined"
#else
        "not defined"
#endif
    );
    
    printf("__ARM_64BIT_STATE: %s\n", 
#ifdef __ARM_64BIT_STATE
        "defined"
#else
        "not defined"
#endif
    );
    
    // 値の表示（定義されている場合）
    printf("\nMacro Values (if defined):\n");
#ifdef _MSC_VER
    printf("_MSC_VER = %d\n", _MSC_VER);
#endif
#ifdef __clang__
    printf("__clang_major__ = %d\n", __clang_major__);
    printf("__clang_minor__ = %d\n", __clang_minor__);
    printf("__clang_patchlevel__ = %d\n", __clang_patchlevel__);
#endif
#ifdef __GNUC__
    printf("__GNUC__ = %d\n", __GNUC__);
    printf("__GNUC_MINOR__ = %d\n", __GNUC_MINOR__);
#endif
#ifdef _M_ARM64
    printf("_M_ARM64 = %d\n", _M_ARM64);
#endif
#ifdef __ARM_ARCH
    printf("__ARM_ARCH = %d\n", __ARM_ARCH);
#endif
    
    return 0;
}
