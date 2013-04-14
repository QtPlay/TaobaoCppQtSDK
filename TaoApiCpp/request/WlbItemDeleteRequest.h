#ifndef WLBITEMDELETEREQUEST_H
#define WLBITEMDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemDeleteResponse.h>

/**
 * TOP API: 通过ItemId,UserId来删除单个商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual WlbItemDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 商品所有人淘宝nick
 **/
  QString userNick;

};

#endif  /* WLBITEMDELETEREQUEST_H */
