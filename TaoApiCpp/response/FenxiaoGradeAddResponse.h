#ifndef FENXIAOGRADEADDRESPONSE_H
#define FENXIAOGRADEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 新建等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoGradeAddResponse() { }

  qlonglong getGradeId() const;
  void setGradeId (qlonglong gradeId);  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 等级ID
 **/
  qlonglong gradeId;

/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

};

#endif
