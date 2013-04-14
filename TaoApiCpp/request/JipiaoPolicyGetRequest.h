#ifndef JIPIAOPOLICYGETREQUEST_H
#define JIPIAOPOLICYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/JipiaoPolicyGetResponse.h>

/**
 * TOP API: 根据政策id或者政策外部id查询政策信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicyGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getPolicyId() const
;  void setPolicyId (QString policyId);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual JipiaoPolicyGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief type外0，表示机票政策id；type为1，表示机票政策out_product_id
 **/
  QString policyId;

/**
 * @brief 0，表示按政策id进行查询；1，表示按政策外部id进行查询
 **/
  qlonglong type;

};

#endif  /* JIPIAOPOLICYGETREQUEST_H */
