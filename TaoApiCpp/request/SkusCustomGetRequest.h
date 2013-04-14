#ifndef SKUSCUSTOMGETREQUEST_H
#define SKUSCUSTOMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SkusCustomGetResponse.h>

/**
 * TOP API: 跟据卖家设定的Sku的外部id获取商品，如果一个outer_id对应多个Sku会返回所有符合条件的sku  
这个Sku所属卖家从传入的session中获取，需要session绑定(注：iid标签里是num_iid的值，可以用作num_iid使用)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SkusCustomGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getOuterId() const
;  void setOuterId (QString outerId);


  virtual SkusCustomGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：Sku结构体中的所有字段；字段之间用“,”隔开
 **/
  QString fields;

/**
 * @brief Sku的外部商家ID
 **/
  QString outerId;

};

#endif  /* SKUSCUSTOMGETREQUEST_H */
