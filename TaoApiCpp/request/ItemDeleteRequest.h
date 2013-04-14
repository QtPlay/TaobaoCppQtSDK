#ifndef ITEMDELETEREQUEST_H
#define ITEMDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemDeleteResponse.h>

/**
 * TOP API: 删除单条商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

};

#endif  /* ITEMDELETEREQUEST_H */
