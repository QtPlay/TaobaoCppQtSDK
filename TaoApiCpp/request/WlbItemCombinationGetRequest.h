#ifndef WLBITEMCOMBINATIONGETREQUEST_H
#define WLBITEMCOMBINATIONGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemCombinationGetResponse.h>

/**
 * TOP API: 根据商品id查询商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WlbItemCombinationGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要查询的组合商品id
 **/
  qlonglong itemId;

};

#endif  /* WLBITEMCOMBINATIONGETREQUEST_H */
