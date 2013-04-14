#ifndef ITEMCATSGETRESPONSE_H
#define ITEMCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>
#include <QList>
#include <TaoApiCpp/domain/ItemCat.h>


/**
 * @brief TOP RESPONSE API: 获取后台供卖家发布商品的标准商品类目。 
<br/>1. 增量获取类目数据可用<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11072">taobao.itemcats.increment.get</a>接口。 
<br/>2. 全量获取类目数据可用<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11078">taobao.topats.itemcats.get</a>接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsGetResponse : public TaoResponse
{
public:
 virtual ~ItemcatsGetResponse() { }

  QList<ItemCat> getItemCats() const;
  void setItemCats (QList<ItemCat> itemCats);  QDateTime getLastModified() const;
  void setLastModified (QDateTime lastModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 增量类目信息,根据fields传入的参数返回相应的结果
 **/
  QList<ItemCat> itemCats;

/**
 * @brief 最近修改时间(如果取增量，会返回该字段)。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime lastModified;

};

#endif
