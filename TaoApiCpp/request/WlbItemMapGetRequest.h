#ifndef WLBITEMMAPGETREQUEST_H
#define WLBITEMMAPGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemMapGetResponse.h>

/**
 * TOP API: 根据物流宝商品ID查询商品映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemMapGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WlbItemMapGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要查询映射关系的物流宝商品id
 **/
  qlonglong itemId;

};

#endif  /* WLBITEMMAPGETREQUEST_H */
