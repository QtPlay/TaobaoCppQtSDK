#ifndef DELIVERYTEMPLATEDELETEREQUEST_H
#define DELIVERYTEMPLATEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/DeliveryTemplateDeleteResponse.h>

/**
 * TOP API: 根据用户指定的模板ID删除指定的模板
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplateDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getTemplateId() const
;  void setTemplateId (qlonglong templateId);


  virtual DeliveryTemplateDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 运费模板ID
 **/
  qlonglong templateId;

};

#endif  /* DELIVERYTEMPLATEDELETEREQUEST_H */
