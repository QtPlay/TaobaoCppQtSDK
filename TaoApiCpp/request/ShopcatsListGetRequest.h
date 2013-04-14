#ifndef SHOPCATSLISTGETREQUEST_H
#define SHOPCATSLISTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShopcatsListGetResponse.h>

/**
 * TOP API: 获取淘宝面向买家的浏览导航类目（跟后台卖家商品管理的类目有差异）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopcatsListGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual ShopcatsListGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段列表，见ShopCat，默认返回：cid,parent_cid,name,is_parent
 **/
  QString fields;

};

#endif  /* SHOPCATSLISTGETREQUEST_H */
