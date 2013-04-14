#ifndef PROPVALUE_H
#define PROPVALUE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 属性值
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PropValue : public TaoDomain
{

public:
 virtual ~PropValue() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  bool getIsParent() const;
  void setIsParent (bool isParent);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getModifiedType() const;
  void setModifiedType (QString modifiedType);
  QString getName() const;
  void setName (QString name);
  QString getNameAlias() const;
  void setNameAlias (QString nameAlias);
  qlonglong getPid() const;
  void setPid (qlonglong pid);
  QString getPropName() const;
  void setPropName (QString propName);
  qlonglong getSortOrder() const;
  void setSortOrder (qlonglong sortOrder);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getVid() const;
  void setVid (qlonglong vid);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目ID
 **/
  qlonglong cid;

/**
 * @brief 是否为父类目属性
 **/
  bool isParent;

/**
 * @brief 修改时间（类目增量专用）
 **/
  QDateTime modifiedTime;

/**
 * @brief 三种枚举类型：modify，add，delete (增量类目专用)
 **/
  QString modifiedType;

/**
 * @brief 属性值
 **/
  QString name;

/**
 * @brief 属性值别名
 **/
  QString nameAlias;

/**
 * @brief 属性 ID
 **/
  qlonglong pid;

/**
 * @brief 属性名
 **/
  QString propName;

/**
 * @brief 排列序号。取值范围:大于零的整数
 **/
  qlonglong sortOrder;

/**
 * @brief 状态。可选值:normal(正常),deleted(删除)
 **/
  QString status;

/**
 * @brief 属性值ID
 **/
  qlonglong vid;

};

#endif  /* PROPVALUE_H */
