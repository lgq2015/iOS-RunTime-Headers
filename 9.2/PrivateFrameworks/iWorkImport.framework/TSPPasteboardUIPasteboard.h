/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardUIPasteboard : TSPPasteboard {
    int  _cachedChangeCount;
    NSArray * _cachedPasteboardTypes;
    unsigned int  _pasteboardItemCount;
    NSMutableDictionary * _pasteboardItemIndexCache;
}

- (void).cxx_destruct;
- (id)URLs;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2;
- (void)addPasteboardItem:(id)arg1;
- (void)addPasteboardItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addPasteboardItemForObject:(id)arg1 type:(id)arg2;
- (void)addPasteboardItemIndex:(unsigned int)arg1 forType:(id)arg2;
- (int)clearContents;
- (BOOL)containsImportableTextTypes;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)importablePlainTextTypes;
- (id)initWithGeneralPasteboard;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2;
- (id)initWithUniquePasteboardName;
- (oneway void)invalidate;
- (void)invalidatePasteboardCache;
- (void)invalidatePasteboardCacheIfNeeded;
- (int)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (id)propertyListForValue:(id)arg1;
- (void)reloadPasteboardItemIndexCacheIfNeeded;
- (void)setString:(id)arg1;
- (id)string;
- (id)strings;
- (void)updateCachedChangeCount;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
