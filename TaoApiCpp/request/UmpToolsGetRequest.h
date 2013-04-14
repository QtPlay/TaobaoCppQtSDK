#ifndef UMPTOOLSGETREQUEST_H
#define UMPTOOLSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpToolsGetResponse.h>

/**
 * TOP API: 查询工具列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getToolCode() const
;  void setToolCode (QString toolCode);


  virtual UmpToolsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 工具编码
 **/
  QString toolCode;

};

#endif  /* UMPTOOLSGETREQUEST_H */
