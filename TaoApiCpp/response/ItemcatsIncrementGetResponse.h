#ifndef ITEMCATSINCREMENTGETRESPONSE_H
#define ITEMCATSINCREMENTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ItemCat.h>
#include <TaoApiCpp/domain/ItemProp.h>
#include <TaoApiCpp/domain/PropValue.h>


/**
 * @brief TOP RESPONSE API: 增量获取后台类目、类目属性、类目属性值数据 
<br/>1. 每天7点左右会产生今天的增量数据，在7点之前获取增量类目数据将会报错，在7点之后获取增量类目数据可以实时返回。 
<br/>2. 最长可以获取最近7天的增量类目数据，如果超过7天没有同步类目数据，建议走<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11078">全量类目</a>接口获取。 
<br/>3. 在增量接口的基础上，建议5天做一次全量同步最新数据，防止数据丢失
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsIncrementGetResponse : public TaoResponse
{
public:
 virtual ~ItemcatsIncrementGetResponse() { }

  QList<ItemCat> getItemCats() const;
  void setItemCats (QList<ItemCat> itemCats);  QList<ItemProp> getItemProps() const;
  void setItemProps (QList<ItemProp> itemProps);  QList<PropValue> getPropValues() const;
  void setPropValues (QList<PropValue> propValues);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 增量类目信息
 **/
  QList<ItemCat> itemCats;

/**
 * @brief 类目属性信息
 **/
  QList<ItemProp> itemProps;

/**
 * @brief 属性值
 **/
  QList<PropValue> propValues;

};

#endif
