#ifndef ITEMPROPSGETRESPONSE_H
#define ITEMPROPSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>
#include <QList>
#include <TaoApiCpp/domain/ItemProp.h>


/**
 * @brief TOP RESPONSE API: 通过设置必要的参数，来获取商品后台标准类目属性，以及这些属性里面详细的属性值prop_values。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItempropsGetResponse : public TaoResponse
{
public:
 virtual ~ItempropsGetResponse() { }

  QList<ItemProp> getItemProps() const;
  void setItemProps (QList<ItemProp> itemProps);  QDateTime getLastModified() const;
  void setLastModified (QDateTime lastModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目属性信息(如果是取全量或者增量，不包括属性值),根据fields传入的参数返回相应的结果
 **/
  QList<ItemProp> itemProps;

/**
 * @brief 最近修改时间(只有取全量或增量的时候会返回该字段)。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime lastModified;

};

#endif
