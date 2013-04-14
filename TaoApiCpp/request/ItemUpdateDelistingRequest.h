#ifndef ITEMUPDATEDELISTINGREQUEST_H
#define ITEMUPDATEDELISTINGREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemUpdateDelistingResponse.h>

/**
 * TOP API: * 单个商品下架 
    * 输入的num_iid必须属于当前会话用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemUpdateDelistingRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemUpdateDelistingResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

};

#endif  /* ITEMUPDATEDELISTINGREQUEST_H */
