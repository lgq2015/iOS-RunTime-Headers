/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeterInternal : NSObject {
    float  fBarometricBaseAltitude;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fBaseAltimeterSample;
    bool  fBaselineReceived;
    struct Dispatcher { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; SEL x11; void*x12; void*x13; void*x14; void*x15; void*x16; unsigned char x17; void*x18; long doublex19; void*x20; void*x21; unsigned long x22; unsigned short x23; void*x24; short x25; short x26; int x27; out in void*x28; void*x29; short x30; void*x31; long doublex32; void*x33; long x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; SEL x57; void*x58; void*x59; void*x60; void*x61; void*x62; unsigned char x63; void*x64; void*x65; void*x66; in BOOL x67; void*x68; int x69; out in void*x70; void*x71; void*x72; const void*x73; short x74; short x75; int x76; out in oneway void*x77; long x78; int x79; double x80; void*x81; void*x82; out const void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; SEL x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; bool x103; unsigned short x104; void*x105; void*x106; const short x107; void*x108; BOOL x109; void*x110; void*x111; short x112; void*x113; long x114; void*x115; unsigned short x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; const in void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; short x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; unsigned char x152; void*x153; void*x154; void*x155; unsigned short x156; void*x157; int x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; struct x166; void*x167; void*x168; void*x169; float x170; void*x171; long x172; void*x173; out void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; float x199; void*x200; long x201; void*x202; out void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; } * fFilteredPressureDispatcher;
    struct deque<float, std::__1::allocator<float> > { 
        struct __split_buffer<float *, std::__1::allocator<float *> > { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::__1::allocator<float *> > { 
                float **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned int __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<float> > { 
            unsigned long __first_; 
        } __size_; 
    }  fPressureSamples;
    id /* block */  fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end