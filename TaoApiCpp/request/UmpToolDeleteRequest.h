#ifndef UMPTOOLDELETEREQUEST_H
#define UMPTOOLDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpToolDeleteResponse.h>

/**
 * TOP API: 删除营销工具。当工具正在被使用的时候，是不能被删除的。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getToolId() const
;  void setToolId (qlonglong toolId);


  virtual UmpToolDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销工具id
 **/
  qlonglong toolId;

};

#endif  /* UMPTOOLDELETEREQUEST_H */
