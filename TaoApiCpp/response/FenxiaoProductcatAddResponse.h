#ifndef FENXIAOPRODUCTCATADDRESPONSE_H
#define FENXIAOPRODUCTCATADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 新增产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductcatAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);  qlonglong getProductLineId() const;
  void setProductLineId (qlonglong productLineId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

/**
 * @brief 产品线ID
 **/
  qlonglong productLineId;

};

#endif
