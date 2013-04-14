#ifndef WLBORDERSCHEDULERULEDELETEREQUEST_H
#define WLBORDERSCHEDULERULEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderscheduleruleDeleteResponse.h>

/**
 * TOP API: 删除单个订单调度规则
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderscheduleruleDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual WlbOrderscheduleruleDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 订单调度规则ID
 **/
  qlonglong id;

/**
 * @brief 商品userNick
 **/
  QString userNick;

};

#endif  /* WLBORDERSCHEDULERULEDELETEREQUEST_H */
