#ifndef CAIPIAOPRESENTWINITEMSGETREQUEST_H
#define CAIPIAOPRESENTWINITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoPresentWinItemsGetResponse.h>

/**
 * TOP API: 获取卖家三个月内的中奖订单列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentWinItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNum() const
;  void setNum (qlonglong num);


  virtual CaipiaoPresentWinItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询个数，最大值为50.如果为空、0和负数，则取默认值50
 **/
  qlonglong num;

};

#endif  /* CAIPIAOPRESENTWINITEMSGETREQUEST_H */
