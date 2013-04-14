#ifndef JIPIAOPOLICYSTATUSUPDATEREQUEST_H
#define JIPIAOPOLICYSTATUSUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/JipiaoPolicystatusUpdateResponse.h>

/**
 * TOP API: 根据外部产品id，进行政策状态更新，挂起/解挂/删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicystatusUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getPolicyId() const
;  void setPolicyId (QString policyId);

 qlonglong getStatus() const
;  void setStatus (qlonglong status);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual JipiaoPolicystatusUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief type为0，表示机票政策id；type为1，表示机票政策out_product_id；最大支持政策数100，注意不要如果不要超出字符串的长度限制，超出的话，请调小批量的个数
 **/
  QString policyId;

/**
 * @brief 政策的状态: 0，挂起；1，解挂；2，删除
 **/
  qlonglong status;

/**
 * @brief 0，表示按政策id进行查询；1，表示按政策外部id进行查询
 **/
  qlonglong type;

};

#endif  /* JIPIAOPOLICYSTATUSUPDATEREQUEST_H */
