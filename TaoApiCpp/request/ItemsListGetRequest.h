#ifndef ITEMSLISTGETREQUEST_H
#define ITEMSLISTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemsListGetResponse.h>

/**
 * TOP API: 查看非公开属性时需要用户登录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsListGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNumIids() const
;  void setNumIids (QString numIids);

 QString getTrackIids() const
;  void setTrackIids (QString trackIids);


  virtual ItemsListGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的商品对象字段。可选值：Item商品结构体中所有字段均可返回；多个字段用“,”分隔。如果想返回整个子对象，那字段为itemimg，如果是想返回子对象里面的字段，那字段为itemimg.url。
 **/
  QString fields;

/**
 * @brief 商品数字id列表，多个num_iid用逗号隔开，一次不超过20个。
 **/
  QString numIids;

/**
 * @brief 商品数字id列表，多个track_iid用逗号隔开，一次不超过20个。
 **/
  QString trackIids;

};

#endif  /* ITEMSLISTGETREQUEST_H */
