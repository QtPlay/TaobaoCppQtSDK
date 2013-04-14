#ifndef OUTENTITYITEM_H
#define OUTENTITYITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 外部商品实体
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OutEntityItem : public TaoDomain
{

public:
 virtual ~OutEntityItem() { }

  QString getEntityId() const;
  void setEntityId (QString entityId);
  QString getEntityType() const;
  void setEntityType (QString entityType);
  
  virtual void parseResponse();

private:
/**
 * @brief entity_type对应的实体类型的id： 
当entity_type为IC_ITEM时，entity_id为ic的商品id
 **/
  QString entityId;

/**
 * @brief 外部实体类型： 
IC_ITEM--ic商品 
IC_SKU--ic销售单元
 **/
  QString entityType;

};

#endif  /* OUTENTITYITEM_H */
