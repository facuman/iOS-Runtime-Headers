/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSOSLongPressTriggersEmergencySOS : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int longPressTriggersEmergencySOS : 1; 
    }  _has;
    BOOL  _longPressTriggersEmergencySOS;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasLongPressTriggersEmergencySOS;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL longPressTriggersEmergencySOS;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLongPressTriggersEmergencySOS;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)longPressTriggersEmergencySOS;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLongPressTriggersEmergencySOS:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLongPressTriggersEmergencySOS:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end