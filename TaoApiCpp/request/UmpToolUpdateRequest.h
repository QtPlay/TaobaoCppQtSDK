#ifndef UMPTOOLUPDATEREQUEST_H
#define UMPTOOLUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpToolUpdateResponse.h>

/**
 * TOP API: 修改工具
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getContent() const
;  void setContent (QString content);

 qlonglong getToolId() const
;  void setToolId (qlonglong toolId);


  virtual UmpToolUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 工具的内容，由sdk的marketingBuilder生成
 **/
  QString content;

/**
 * @brief 工具id
 **/
  qlonglong toolId;

};

#endif  /* UMPTOOLUPDATEREQUEST_H */
