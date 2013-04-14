#ifndef JIPIAOPOLICYPROCESSRESPONSE_H
#define JIPIAOPOLICYPROCESSRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 添加/修改一条机票政策
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicyProcessResponse : public TaoResponse
{
public:
 virtual ~JipiaoPolicyProcessResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);  qlonglong getPolicyId() const;
  void setPolicyId (qlonglong policyId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 机票政策添加返回状态，true，成功；false，失败
 **/
  bool isSuccess;

/**
 * @brief 返回政策主键id(机票系统唯一id)
 **/
  qlonglong policyId;

};

#endif
