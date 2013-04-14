#ifndef SIMBACREATIVEDELETEREQUEST_H
#define SIMBACREATIVEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativeDeleteResponse.h>

/**
 * TOP API: 删除一个创意
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCreativeId() const
;  void setCreativeId (qlonglong creativeId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCreativeDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 创意Id
 **/
  qlonglong creativeId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACREATIVEDELETEREQUEST_H */
