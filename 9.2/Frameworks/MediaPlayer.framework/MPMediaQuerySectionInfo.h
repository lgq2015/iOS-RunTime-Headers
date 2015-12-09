/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL  _hasUnknownSection;
    NSArray * _sectionIndexTitles;
    NSArray * _sections;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic) BOOL hasUnknownSection;
@property (nonatomic, copy) NSArray *sectionIndexTitles;
@property (nonatomic, readonly, copy) NSArray *sections;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasUnknownSection;
- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIndexTitles;
- (id)sections;
- (void)setHasUnknownSection:(BOOL)arg1;
- (void)setSectionIndexTitles:(id)arg1;

@end