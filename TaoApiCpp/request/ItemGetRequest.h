#ifndef ITEMGETREQUEST_H
#define ITEMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemGetResponse.h>

/**
 * TOP API: 获取单个商品的详细信息  
卖家未登录时只能获得这个商品的公开数据，卖家登录后可以获取商品的所有数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getTrackIid() const
;  void setTrackIid (QString trackIid);


  virtual ItemGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的商品对象字段。可选值：Item商品结构体中所有字段均可返回；多个字段用“,”分隔。如果想返回整个子对象，那字段为item_img，如果是想返回子对象里面的字段，那字段为item_img.url。新增返回字段：second_kill（是否秒杀商品）、auto_fill（代充商品类型）,props_name（商品属性名称）。新增返回字段：item_weight(商品的重量，格式为数字，包含小数)、item_size(商品的体积，格式为数字，包含小数)
 **/
  QString fields;

/**
 * @brief 商品数字ID
 **/
  qlonglong numIid;

/**
 * @brief 商品数字ID(带有跟踪效果)
 **/
  QString trackIid;

};

#endif  /* ITEMGETREQUEST_H */
