#ifndef UMPTOOLGETREQUEST_H
#define UMPTOOLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpToolGetResponse.h>

/**
 * TOP API: 根据工具id获取一个工具对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getToolId() const
;  void setToolId (qlonglong toolId);


  virtual UmpToolGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 工具的id
 **/
  qlonglong toolId;

};

#endif  /* UMPTOOLGETREQUEST_H */
