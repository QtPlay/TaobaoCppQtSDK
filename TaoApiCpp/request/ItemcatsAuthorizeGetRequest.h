#ifndef ITEMCATSAUTHORIZEGETREQUEST_H
#define ITEMCATSAUTHORIZEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemcatsAuthorizeGetResponse.h>

/**
 * TOP API: 查询B商家被授权品牌列表、类目列表和 c 商家新品类目列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsAuthorizeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual ItemcatsAuthorizeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段。目前支持有： 
brand.vid, brand.name,  
item_cat.cid, item_cat.name, item_cat.status,item_cat.sort_order,item_cat.parent_cid,item_cat.is_parent, 
xinpin_item_cat.cid,  
xinpin_item_cat.name,  
xinpin_item_cat.status, 
xinpin_item_cat.sort_order, 
xinpin_item_cat.parent_cid, 
xinpin_item_cat.is_parent
 **/
  QString fields;

};

#endif  /* ITEMCATSAUTHORIZEGETREQUEST_H */
