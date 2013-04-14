#ifndef WLBITEMGETREQUEST_H
#define WLBITEMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemGetResponse.h>

/**
 * TOP API: 根据商品ID获取商品信息,除了获取商品信息外还可获取商品属性信息和库存信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WlbItemGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品ID
 **/
  qlonglong itemId;

};

#endif  /* WLBITEMGETREQUEST_H */
