#ifndef ITEMCATSGETREQUEST_H
#define ITEMCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemcatsGetResponse.h>

/**
 * TOP API: 获取后台供卖家发布商品的标准商品类目。 
<br/>1. 增量获取类目数据可用<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11072">taobao.itemcats.increment.get</a>接口。 
<br/>2. 全量获取类目数据可用<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11078">taobao.topats.itemcats.get</a>接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCids() const
;  void setCids (qlonglong cids);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getParentCid() const
;  void setParentCid (qlonglong parentCid);


  virtual ItemcatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品所属类目ID列表，用半角逗号(,)分隔 例如:(18957,19562,) (cids、parent_cid至少传一个)
 **/
  qlonglong cids;

/**
 * @brief 需要返回的字段列表，见ItemCat，默认返回：cid,parent_cid,name,is_parent
 **/
  QString fields;

/**
 * @brief 父商品类目 id，0表示根节点, 传输该参数返回所有子类目。 (cids、parent_cid至少传一个)
 **/
  qlonglong parentCid;

};

#endif  /* ITEMCATSGETREQUEST_H */
