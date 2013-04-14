#ifndef ROOMTYPE_H
#define ROOMTYPE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief RoomType（房型）结构。各字段详细说明可参考接口定义，如：房型发布接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoomType : public TaoDomain
{

public:
 virtual ~RoomType() { }

  QString getAliasName() const;
  void setAliasName (QString aliasName);
  QString getAuditDenyReason() const;
  void setAuditDenyReason (QString auditDenyReason);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getHid() const;
  void setHid (qlonglong hid);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  qlonglong getRid() const;
  void setRid (qlonglong rid);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  
  virtual void parseResponse();

private:
/**
 * @brief 某卖家提供的房型别名(注：该字段将被废弃)
 **/
  QString aliasName;

/**
 * @brief 房型审核被否决的原因
 **/
  QString auditDenyReason;

/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 修改时间
 **/
  QDateTime modified;

/**
 * @brief 房型名称
 **/
  QString name;

/**
 * @brief 房型id
 **/
  qlonglong rid;

/**
 * @brief 状态。0：待审核，1：正常（审核通过），2：审核否决，3：停售
 **/
  qlonglong status;

};

#endif  /* ROOMTYPE_H */
